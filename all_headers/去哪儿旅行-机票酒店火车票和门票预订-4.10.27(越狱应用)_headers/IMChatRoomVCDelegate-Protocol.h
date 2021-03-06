//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMChatRoomVC, NSString, QCIMChatRoomVC, UIView;

@protocol IMChatRoomVCDelegate <NSObject>

@optional
- (UIView *)getRateServiceViewWithChatVC:(QCIMChatRoomVC *)arg1;
- (void)onReceiveCloseNotification:(NSString *)arg1;
- (void)onCloseAck:(NSString *)arg1 userId:(NSString *)arg2 retValue:(int)arg3 retMsg:(NSString *)arg4;
- (void)onClose:(IMChatRoomVC *)arg1;
- (void)onDealloc:(IMChatRoomVC *)arg1;
- (void)onExitChatroom:(IMChatRoomVC *)arg1;
- (void)onEnterChatroom:(IMChatRoomVC *)arg1;
- (void)initChatroom:(IMChatRoomVC *)arg1 withCustomType:(long long)arg2 CustomInfo:(NSString *)arg3;
@end

