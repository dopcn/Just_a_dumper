//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YKCSendInputView;

@protocol YKCSendInputViewDelegate <NSObject>
- (_Bool)ykc_triggerTopicInputState;
- (void)ykc_sendInputViewidBeginEditing;
- (void)ykc_sendInputView:(YKCSendInputView *)arg1 contentCount:(long long)arg2;
- (void)ykc_sendInputView:(YKCSendInputView *)arg1 contentHeight:(long long)arg2;
- (void)ykc_sendInputView:(YKCSendInputView *)arg1 sendContent:(NSString *)arg2;
@end

