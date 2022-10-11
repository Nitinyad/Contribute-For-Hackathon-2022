"use strict";
/*
 * ATTENTION: An "eval-source-map" devtool has been used.
 * This devtool is neither made for production nor for readable output files.
 * It uses "eval()" calls to create a separate source file with attached SourceMaps in the browser devtools.
 * If you are trying to read the output file, select a different devtool (https://webpack.js.org/configuration/devtool/)
 * or disable the default devtool with "devtool: false".
 * If you are looking for production-ready output files, see mode: "production" (https://webpack.js.org/configuration/mode/).
 */
(() => {
var exports = {};
exports.id = "pages/auth/signup";
exports.ids = ["pages/auth/signup"];
exports.modules = {

/***/ "./pages/auth/signup.js":
/*!******************************!*\
  !*** ./pages/auth/signup.js ***!
  \******************************/
/***/ ((module, __webpack_exports__, __webpack_require__) => {

eval("__webpack_require__.a(module, async (__webpack_handle_async_dependencies__, __webpack_async_result__) => { try {\n__webpack_require__.r(__webpack_exports__);\n/* harmony export */ __webpack_require__.d(__webpack_exports__, {\n/* harmony export */   \"default\": () => (__WEBPACK_DEFAULT_EXPORT__)\n/* harmony export */ });\n/* harmony import */ var react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! react/jsx-dev-runtime */ \"react/jsx-dev-runtime\");\n/* harmony import */ var react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0___default = /*#__PURE__*/__webpack_require__.n(react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0__);\n/* harmony import */ var react__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! react */ \"react\");\n/* harmony import */ var react__WEBPACK_IMPORTED_MODULE_1___default = /*#__PURE__*/__webpack_require__.n(react__WEBPACK_IMPORTED_MODULE_1__);\n/* harmony import */ var axios__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! axios */ \"axios\");\nvar __webpack_async_dependencies__ = __webpack_handle_async_dependencies__([axios__WEBPACK_IMPORTED_MODULE_2__]);\naxios__WEBPACK_IMPORTED_MODULE_2__ = (__webpack_async_dependencies__.then ? (await __webpack_async_dependencies__)() : __webpack_async_dependencies__)[0];\n\n\n\n/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (()=>{\n    const { 0: email , 1: setEmail  } = (0,react__WEBPACK_IMPORTED_MODULE_1__.useState)(\"\");\n    const { 0: password , 1: setPassword  } = (0,react__WEBPACK_IMPORTED_MODULE_1__.useState)(\"\");\n    const onSubmit = async (event)=>{\n        event.preventDefault();\n        const response = await axios__WEBPACK_IMPORTED_MODULE_2__[\"default\"].post(\"/api/users/signup\", {\n            email,\n            password\n        });\n        console.log(response.data);\n    };\n    return /*#__PURE__*/ (0,react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0__.jsxDEV)(\"form\", {\n        onSubmit: onSubmit,\n        children: [\n            /*#__PURE__*/ (0,react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0__.jsxDEV)(\"h1\", {\n                children: \"Signup\"\n            }, void 0, false, {\n                fileName: \"C:\\\\Users\\\\advar\\\\OneDrive\\\\Desktop\\\\ticketing\\\\client\\\\pages\\\\auth\\\\signup.js\",\n                lineNumber: 18,\n                columnNumber: 7\n            }, undefined),\n            /*#__PURE__*/ (0,react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0__.jsxDEV)(\"div\", {\n                className: \"form-group\",\n                children: [\n                    /*#__PURE__*/ (0,react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0__.jsxDEV)(\"label\", {\n                        children: \"Email Address\"\n                    }, void 0, false, {\n                        fileName: \"C:\\\\Users\\\\advar\\\\OneDrive\\\\Desktop\\\\ticketing\\\\client\\\\pages\\\\auth\\\\signup.js\",\n                        lineNumber: 20,\n                        columnNumber: 9\n                    }, undefined),\n                    /*#__PURE__*/ (0,react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0__.jsxDEV)(\"input\", {\n                        className: \"form-control\",\n                        value: email,\n                        onChange: (e)=>setEmail(e.target.value)\n                    }, void 0, false, {\n                        fileName: \"C:\\\\Users\\\\advar\\\\OneDrive\\\\Desktop\\\\ticketing\\\\client\\\\pages\\\\auth\\\\signup.js\",\n                        lineNumber: 21,\n                        columnNumber: 9\n                    }, undefined)\n                ]\n            }, void 0, true, {\n                fileName: \"C:\\\\Users\\\\advar\\\\OneDrive\\\\Desktop\\\\ticketing\\\\client\\\\pages\\\\auth\\\\signup.js\",\n                lineNumber: 19,\n                columnNumber: 7\n            }, undefined),\n            /*#__PURE__*/ (0,react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0__.jsxDEV)(\"div\", {\n                className: \"form-group\",\n                children: [\n                    /*#__PURE__*/ (0,react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0__.jsxDEV)(\"label\", {\n                        children: \"Password\"\n                    }, void 0, false, {\n                        fileName: \"C:\\\\Users\\\\advar\\\\OneDrive\\\\Desktop\\\\ticketing\\\\client\\\\pages\\\\auth\\\\signup.js\",\n                        lineNumber: 28,\n                        columnNumber: 9\n                    }, undefined),\n                    /*#__PURE__*/ (0,react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0__.jsxDEV)(\"input\", {\n                        className: \"form-control\",\n                        value: password,\n                        onChange: (e)=>setPassword(e.target.value)\n                    }, void 0, false, {\n                        fileName: \"C:\\\\Users\\\\advar\\\\OneDrive\\\\Desktop\\\\ticketing\\\\client\\\\pages\\\\auth\\\\signup.js\",\n                        lineNumber: 29,\n                        columnNumber: 9\n                    }, undefined)\n                ]\n            }, void 0, true, {\n                fileName: \"C:\\\\Users\\\\advar\\\\OneDrive\\\\Desktop\\\\ticketing\\\\client\\\\pages\\\\auth\\\\signup.js\",\n                lineNumber: 27,\n                columnNumber: 7\n            }, undefined),\n            /*#__PURE__*/ (0,react_jsx_dev_runtime__WEBPACK_IMPORTED_MODULE_0__.jsxDEV)(\"button\", {\n                className: \"btn btn-primary\",\n                onSubmit: onSubmit,\n                children: \"Sign Up\"\n            }, void 0, false, {\n                fileName: \"C:\\\\Users\\\\advar\\\\OneDrive\\\\Desktop\\\\ticketing\\\\client\\\\pages\\\\auth\\\\signup.js\",\n                lineNumber: 35,\n                columnNumber: 7\n            }, undefined)\n        ]\n    }, void 0, true, {\n        fileName: \"C:\\\\Users\\\\advar\\\\OneDrive\\\\Desktop\\\\ticketing\\\\client\\\\pages\\\\auth\\\\signup.js\",\n        lineNumber: 17,\n        columnNumber: 5\n    }, undefined);\n});\n\n__webpack_async_result__();\n} catch(e) { __webpack_async_result__(e); } });//# sourceURL=[module]\n//# sourceMappingURL=data:application/json;charset=utf-8;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiLi9wYWdlcy9hdXRoL3NpZ251cC5qcy5qcyIsIm1hcHBpbmdzIjoiOzs7Ozs7Ozs7Ozs7QUFBQTtBQUF3QztBQUNkO0FBRTFCLGlFQUFlLElBQU07SUFDbkIsTUFBTSxLQUFDRyxLQUFLLE1BQUVDLFFBQVEsTUFBSUgsK0NBQVEsQ0FBQyxFQUFFLENBQUM7SUFDdEMsTUFBTSxLQUFDSSxRQUFRLE1BQUVDLFdBQVcsTUFBSUwsK0NBQVEsQ0FBQyxFQUFFLENBQUM7SUFFOUMsTUFBTU0sUUFBUSxHQUFHLE9BQU9DLEtBQUssR0FBSTtRQUM3QkEsS0FBSyxDQUFDQyxjQUFjLEVBQUUsQ0FBQztRQUUxQixNQUFNQyxRQUFRLEdBQUcsTUFBTVIsa0RBQVUsQ0FBQyxtQkFBbUIsRUFBQztZQUFDQyxLQUFLO1lBQUNFLFFBQVE7U0FBQyxDQUFDO1FBRXZFTyxPQUFPLENBQUNDLEdBQUcsQ0FBQ0gsUUFBUSxDQUFDSSxJQUFJLENBQUMsQ0FBQztJQUM1QixDQUFDO0lBRUMscUJBQ0UsOERBQUNDLE1BQUk7UUFBQ1IsUUFBUSxFQUFFQSxRQUFROzswQkFDdEIsOERBQUNTLElBQUU7MEJBQUMsUUFBTTs7Ozs7eUJBQUs7MEJBQ2YsOERBQUNDLEtBQUc7Z0JBQUNDLFNBQVMsRUFBQyxZQUFZOztrQ0FDekIsOERBQUNDLE9BQUs7a0NBQUMsZUFBYTs7Ozs7aUNBQVE7a0NBQzVCLDhEQUFDQyxPQUFLO3dCQUNKRixTQUFTLEVBQUMsY0FBYzt3QkFDeEJHLEtBQUssRUFBRWxCLEtBQUs7d0JBQ1ptQixRQUFRLEVBQUUsQ0FBQ0MsQ0FBQyxHQUFLbkIsUUFBUSxDQUFDbUIsQ0FBQyxDQUFDQyxNQUFNLENBQUNILEtBQUssQ0FBQzs7Ozs7aUNBQ3pDOzs7Ozs7eUJBQ0U7MEJBQ04sOERBQUNKLEtBQUc7Z0JBQUNDLFNBQVMsRUFBQyxZQUFZOztrQ0FDekIsOERBQUNDLE9BQUs7a0NBQUMsVUFBUTs7Ozs7aUNBQVE7a0NBQ3ZCLDhEQUFDQyxPQUFLO3dCQUNORixTQUFTLEVBQUMsY0FBYzt3QkFDeEJHLEtBQUssRUFBSWhCLFFBQVE7d0JBQ2pCaUIsUUFBUSxFQUFFQyxDQUFBQSxDQUFDLEdBQUlqQixXQUFXLENBQUNpQixDQUFDLENBQUNDLE1BQU0sQ0FBQ0gsS0FBSyxDQUFDOzs7OztpQ0FDeEM7Ozs7Ozt5QkFDRTswQkFDTiw4REFBQ0ksUUFBTTtnQkFBQ1AsU0FBUyxFQUFDLGlCQUFpQjtnQkFBQ1gsUUFBUSxFQUFFQSxRQUFROzBCQUFFLFNBQU87Ozs7O3lCQUFTOzs7Ozs7aUJBQ25FLENBQ1A7QUFDSixDQUFDLEVBQUMiLCJzb3VyY2VzIjpbIndlYnBhY2s6Ly9jbGllbnQvLi9wYWdlcy9hdXRoL3NpZ251cC5qcz81NmUyIl0sInNvdXJjZXNDb250ZW50IjpbImltcG9ydCBSZWFjdCwgeyB1c2VTdGF0ZSB9IGZyb20gJ3JlYWN0JztcclxuaW1wb3J0IGF4aW9zIGZyb20gJ2F4aW9zJztcclxuXHJcbmV4cG9ydCBkZWZhdWx0ICgpID0+IHtcclxuICBjb25zdCBbZW1haWwsIHNldEVtYWlsXSA9IHVzZVN0YXRlKFwiXCIpO1xyXG4gIGNvbnN0IFtwYXNzd29yZCwgc2V0UGFzc3dvcmRdID0gdXNlU3RhdGUoXCJcIik7XHJcblxyXG5jb25zdCBvblN1Ym1pdCA9IGFzeW5jIChldmVudCk9PiB7XHJcbiAgICBldmVudC5wcmV2ZW50RGVmYXVsdCgpO1xyXG5cclxuIGNvbnN0IHJlc3BvbnNlID0gYXdhaXQgYXhpb3MucG9zdCgnL2FwaS91c2Vycy9zaWdudXAnLHtlbWFpbCxwYXNzd29yZH0pO1xyXG5cclxuIGNvbnNvbGUubG9nKHJlc3BvbnNlLmRhdGEpO1xyXG59XHJcblxyXG4gIHJldHVybiAoXHJcbiAgICA8Zm9ybSBvblN1Ym1pdD17b25TdWJtaXR9PlxyXG4gICAgICA8aDE+U2lnbnVwPC9oMT5cclxuICAgICAgPGRpdiBjbGFzc05hbWU9XCJmb3JtLWdyb3VwXCI+XHJcbiAgICAgICAgPGxhYmVsPkVtYWlsIEFkZHJlc3M8L2xhYmVsPlxyXG4gICAgICAgIDxpbnB1dFxyXG4gICAgICAgICAgY2xhc3NOYW1lPVwiZm9ybS1jb250cm9sXCJcclxuICAgICAgICAgIHZhbHVlPXtlbWFpbH1cclxuICAgICAgICAgIG9uQ2hhbmdlPXsoZSkgPT4gc2V0RW1haWwoZS50YXJnZXQudmFsdWUpfVxyXG4gICAgICAgIC8+XHJcbiAgICAgIDwvZGl2PlxyXG4gICAgICA8ZGl2IGNsYXNzTmFtZT1cImZvcm0tZ3JvdXBcIj5cclxuICAgICAgICA8bGFiZWw+UGFzc3dvcmQ8L2xhYmVsPlxyXG4gICAgICAgIDxpbnB1dCBcclxuICAgICAgICBjbGFzc05hbWU9XCJmb3JtLWNvbnRyb2xcIiBcclxuICAgICAgICB2YWx1ZSA9IHtwYXNzd29yZH1cclxuICAgICAgICBvbkNoYW5nZT17ZSA9PiBzZXRQYXNzd29yZChlLnRhcmdldC52YWx1ZSl9XHJcbiAgICAgICAgLz5cclxuICAgICAgPC9kaXY+XHJcbiAgICAgIDxidXR0b24gY2xhc3NOYW1lPVwiYnRuIGJ0bi1wcmltYXJ5XCIgb25TdWJtaXQ9e29uU3VibWl0fT5TaWduIFVwPC9idXR0b24+XHJcbiAgICA8L2Zvcm0+XHJcbiAgKTtcclxufTtcclxuIl0sIm5hbWVzIjpbIlJlYWN0IiwidXNlU3RhdGUiLCJheGlvcyIsImVtYWlsIiwic2V0RW1haWwiLCJwYXNzd29yZCIsInNldFBhc3N3b3JkIiwib25TdWJtaXQiLCJldmVudCIsInByZXZlbnREZWZhdWx0IiwicmVzcG9uc2UiLCJwb3N0IiwiY29uc29sZSIsImxvZyIsImRhdGEiLCJmb3JtIiwiaDEiLCJkaXYiLCJjbGFzc05hbWUiLCJsYWJlbCIsImlucHV0IiwidmFsdWUiLCJvbkNoYW5nZSIsImUiLCJ0YXJnZXQiLCJidXR0b24iXSwic291cmNlUm9vdCI6IiJ9\n//# sourceURL=webpack-internal:///./pages/auth/signup.js\n");

/***/ }),

/***/ "react":
/*!************************!*\
  !*** external "react" ***!
  \************************/
/***/ ((module) => {

module.exports = require("react");

/***/ }),

/***/ "react/jsx-dev-runtime":
/*!****************************************!*\
  !*** external "react/jsx-dev-runtime" ***!
  \****************************************/
/***/ ((module) => {

module.exports = require("react/jsx-dev-runtime");

/***/ }),

/***/ "axios":
/*!************************!*\
  !*** external "axios" ***!
  \************************/
/***/ ((module) => {

module.exports = import("axios");;

/***/ })

};
;

// load runtime
var __webpack_require__ = require("../../webpack-runtime.js");
__webpack_require__.C(exports);
var __webpack_exec__ = (moduleId) => (__webpack_require__(__webpack_require__.s = moduleId))
var __webpack_exports__ = (__webpack_exec__("./pages/auth/signup.js"));
module.exports = __webpack_exports__;

})();