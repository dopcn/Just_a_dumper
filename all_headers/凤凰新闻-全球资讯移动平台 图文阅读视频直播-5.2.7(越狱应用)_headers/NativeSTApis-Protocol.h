//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class NSNumber, NSString;

@protocol NativeSTApis <JSExport>
- (void)showShareButton:(NSString *)arg1;
- (void)addFeedbackStatistic:(NSString *)arg1;
- (void)addHelpStatistic:(NSString *)arg1;
- (void)setToolBarType:(NSString *)arg1;
- (void)dispatchWithType:(NSString *)arg1 url:(NSString *)arg2 category:(NSString *)arg3 errUrl:(NSString *)arg4 documentId:(NSString *)arg5;
- (void)openInputViewWithTid:(NSString *)arg1 replyId:(NSString *)arg2 toGuid:(NSString *)arg3 toNickNmame:(NSString *)arg4 toAvatar:(NSString *)arg5;
- (void)reloadWeb;
- (NSNumber *)isSupportObjc;

@optional
- (void)showShareButton:(NSString *)arg1 __JS_EXPORT_AS__showShareButton:(id)arg2;
- (void)addFeedbackStatistic:(NSString *)arg1 __JS_EXPORT_AS__addFeedbackStatistic:(id)arg2;
- (void)addHelpStatistic:(NSString *)arg1 __JS_EXPORT_AS__addHelpStatistic:(id)arg2;
- (void)setToolBarType:(NSString *)arg1 __JS_EXPORT_AS__setToolBarType:(id)arg2;
- (void)dispatchWithType:(NSString *)arg1 url:(NSString *)arg2 category:(NSString *)arg3 errUrl:(NSString *)arg4 documentId:(NSString *)arg5 __JS_EXPORT_AS__dispatch:(id)arg6;
- (void)openInputViewWithTid:(NSString *)arg1 replyId:(NSString *)arg2 toGuid:(NSString *)arg3 toNickNmame:(NSString *)arg4 toAvatar:(NSString *)arg5 __JS_EXPORT_AS__openInputView:(id)arg6;
@end

