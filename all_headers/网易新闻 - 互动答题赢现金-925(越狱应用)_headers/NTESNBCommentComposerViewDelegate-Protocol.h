//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NTESNBCommentComposerModel, NTESNBCommentComposerView;

@protocol NTESNBCommentComposerViewDelegate

@optional
- (void)commentComposer:(NTESNBCommentComposerView *)arg1 willCacheDraft:(NTESNBCommentComposerModel *)arg2;
- (void)commentComposerDidClose:(NTESNBCommentComposerView *)arg1;
- (void)commentComposer:(NTESNBCommentComposerView *)arg1 willSendMessage:(NTESNBCommentComposerModel *)arg2;
@end

