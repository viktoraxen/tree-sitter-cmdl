# Treesitter parser for CMDL

This repository contains a working tree-sitter parser for the CMDL language, with syntax highlighting implemented.

## Screeshots

Following are som screenshots of the syntax highlighting using different colorschemes.

### [TokyoDark](https://github.com/tiagovla/tokyodark.nvim) (flavor night)

<img src="https://github.com/lyktstolpe/tree-sitter-cmdl/assets/37225272/9b3a06f5-5ccb-4206-b433-86824c7474c7" width = "500"/>

### [OneDark](https://github.com/navarasu/onedark.nvim)

<img src="https://github.com/lyktstolpe/tree-sitter-cmdl/assets/37225272/2da58718-9121-44bb-9ffc-f399defe3f6b" width = "500"/>

## Integrate into NeoVim using nvim-treesitter

To integrate syntax highlighting with NeoVim using the plugin [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter), add the following to your ```init.lua```:

```lua
vim.api.nvim_create_autocmd(
    {
        "BufNewFile",
        "BufRead",
    },
    {
        pattern = "*.cmdl",
        callback = function()
            print("cmdl file")
            local buf = vim.api.nvim_get_current_buf()
            vim.api.nvim_buf_set_option(buf, "filetype", "cmdl")
        end
    }
)

local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.cmdl = {
    install_info = {
        url = "https://github.com/lyktstolpe/tree-sitter-cmdl"

        files = { "src/parser.c" },
        branch = "main",
        generate_reqires_npm = false,
        requires_generate_from_grammar = false,
    },

    filetype = "cmdl",
}
```

You also need to tell nvim-treesitter where to find the highlight queries, since these files are not automatically fetched for custom languages. For this you need the following:

 * The directory ```queries/``` from this repository.
 * The path to your nvim install location, usually ```~/.local/nvim/```.

Run the command

```ln -s <path_to_repo>/tree-sitter-cmdl/queries/ <nvim_install_path>/queries/cmdl```

to link the directories, or copy the contents directly if you prefer.
