//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YWInternalCustomBubbleViewModel.h"

@class YWCombinedForwardConversation, YWIMKit;

@interface YWMergeForwardBubbleViewModel : YWInternalCustomBubbleViewModel
{
    YWCombinedForwardConversation *_combinedConversation;
    CDUnknownBlockType _viewConversationBlock;
    YWIMKit *_imKit;
}

@property(nonatomic) __weak YWIMKit *imKit; // @synthesize imKit=_imKit;
@property(copy, nonatomic) CDUnknownBlockType viewConversationBlock; // @synthesize viewConversationBlock=_viewConversationBlock;
@property(retain, nonatomic) YWCombinedForwardConversation *combinedConversation; // @synthesize combinedConversation=_combinedConversation;
- (void).cxx_destruct;
- (void)getFormatChatText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateIfNeededWithMessage:(id)arg1 andIMKit:(id)arg2;
- (id)initWithMessage:(id)arg1;

@end

