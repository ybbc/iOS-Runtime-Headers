/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFunctionNode : TSTExpressionNode {
    TSTFunctionEndNode * _functionEndNode;
    int  _functionIndex;
    NSString * _invalidFunctionName;
    NSArray * _whitespaceAfterDelimiters;
    NSString * _whitespaceAfterFunctionName;
    NSString * _whitespaceAfterLeftParen;
}

@property (nonatomic, retain) TSTFunctionEndNode *functionEndNode;
@property (nonatomic, readonly) int functionIndex;
@property (getter=isInvalidFunction, nonatomic, readonly) bool invalidFunction;
@property (nonatomic, retain) NSString *invalidFunctionName;
@property (nonatomic, readonly) short maxArguments;
@property (nonatomic, readonly) short minArguments;
@property (nonatomic, readonly) unsigned long long numArguments;
@property (nonatomic, retain) NSArray *whitespaceAfterDelimiters;
@property (nonatomic, retain) NSString *whitespaceAfterFunctionName;
@property (retain) NSString *whitespaceAfterLeftParen;

+ (id)newDefaultFunctionNodeWithContext:(id)arg1 functionIndex:(int)arg2;
+ (id)newSumNodeWithContext:(id)arg1 children:(id)arg2;

- (void).cxx_destruct;
- (void)addTSTCanvasReferencesToSet:(id)arg1 inRangeContext:(unsigned char)arg2 withColorHelper:(id)arg3 preferringNodesFromStorage:(id)arg4 allVisitedNodes:(id)arg5;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned long long x2; unsigned long long x3; id x4; bool x5; }*)arg1 hostCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2 symbolTable:(struct TSCESymbolTable { id x1; unsigned int x2; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct __hash_table<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true>, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)arg3;
- (id)exportString;
- (id)formulaPlainText;
- (id)functionEndNode;
- (int)functionIndex;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 functionIndex:(int)arg2 children:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(bool)arg2;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(bool)arg2 unwrapped:(bool)arg3;
- (id)invalidFunctionName;
- (bool)isDescendantOfChild:(id)arg1;
- (bool)isEmptyFunctionNode;
- (bool)isEqualToExpressionNode:(id)arg1;
- (bool)isFunctionNode;
- (bool)isInvalidFunction;
- (bool)isMissingRequiredArgument;
- (unsigned long long)lastIndexOfSubtree;
- (void)loadFromArchive:(const struct FunctionNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; unsigned int x7; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (short)maxArguments;
- (short)minArguments;
- (id)mostSpecificNodeContainingIndex:(unsigned long long)arg1 correspondingIndex:(unsigned long long)arg2;
- (unsigned long long)numArguments;
- (id)p_functionSpec;
- (void)p_resetArgumentSpecForChildren;
- (struct TSTCSENodeData { unsigned long long x1; unsigned long long x2; })recordHashesForSubexpressions:(id)arg1;
- (void)resurrectModeTokens;
- (void)saveToArchive:(struct FunctionNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; unsigned int x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setFunctionEndNode:(id)arg1;
- (void)setInvalidFunctionName:(id)arg1;
- (void)setWhitespaceAfterDelimiters:(id)arg1;
- (void)setWhitespaceAfterFunctionName:(id)arg1;
- (void)setWhitespaceAfterLeftParen:(id)arg1;
- (id)string;
- (int)tokenType;
- (id)whitespaceAfterDelimiters;
- (id)whitespaceAfterFunctionName;
- (id)whitespaceAfterLeftParen;

@end
