#ifndef ISA_ABSTRACT_H
#define ISA_ABSTRACT_H

#include <string>

#include "aliases.h"
#include "asm_types.h"
#include "state.h"
#include "utils.h"

namespace lc3
{
namespace core
{
    class ISAHandler
    {
    public:
        ISAHandler(void);
        virtual ~ISAHandler(void) = default;

        SymbolTable const & getRegs(void) { return regs; }

    protected:
        std::vector<PIInstruction> instructions;
        SymbolTable regs;
    };

    class IOperand
    {
    public:
        enum class Type {
              FIXED = 0
            , NUM
            , LABEL
            , REG
            , INVALID
        };

        IOperand(Type type, std::string const & type_str, uint32_t width);
        virtual ~IOperand(void) = default;

        virtual optional<uint32_t> encode(asmbl::Statement const & statement, asmbl::StatementPiece const & piece,
            SymbolTable const & regs, SymbolTable const & symbols, lc3::utils::AssemblerLogger & logger) = 0;
        bool isEqualType(Type other) const;

        Type getType(void) const { return type; }
        uint32_t getWidth(void) const { return width; }

    protected:
        Type type;

        // Used by assembler.
        std::string type_str;
        uint32_t width;

        // Used by simulator.
        uint16_t value;
    };

    class IInstruction
    {
    public:
        IInstruction(std::string const & name, std::vector<PIOperand> const & operands);
        IInstruction(IInstruction const & that);
        virtual ~IInstruction(void) = default;

        virtual PIEvent buildEvents(MachineState const & state) const = 0;
        std::string toFormatString(void) const;
        std::string toValueString(void) const;

        std::string const & getName(void) const { return name; }
        std::vector<PIOperand> const & getOperands(void) const { return operands; }
        PIOperand getOperand(uint32_t idx) const { return operands[idx]; }

    protected:
        std::string name;
        std::vector<PIOperand> operands;
    };
};
};

#endif
