//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString, XDb, XMessageCenterItem, XSession;

@protocol XSessionProtocol <NSObject>
- (_Bool)isGroupChat:(long long)arg1;
- (_Bool)isGroupChatByType:(int)arg1;
- (_Bool)isSingleChatByType:(int)arg1;
- (_Bool)isSystemSessionByType:(int)arg1;
- (_Bool)isSupportCloseNoticeByType:(int)arg1;
- (_Bool)isLocalManageByType:(int)arg1;
- (_Bool)isLocalManage:(long long)arg1;
- (void)closeNotice:(NSSet *)arg1 withCallback:(void (^)(_Bool, NSString *))arg2;
- (void)openNotice:(NSSet *)arg1 withCallback:(void (^)(_Bool, NSString *))arg2;
- (_Bool)isNoticeClosed:(XMessageCenterItem *)arg1;
- (void)acceptSessionNoticeProfile:(NSSet *)arg1;
- (void)reportSession:(XSession *)arg1 haveArrival:(long long)arg2 inDb:(XDb *)arg3;
- (void)reportSession:(XSession *)arg1 haveRead:(long long)arg2 inDb:(XDb *)arg3;
- (_Bool)isInStack:(long long)arg1;
- (_Bool)isInChat:(long long)arg1;
- (void)leave:(XSession *)arg1;
- (void)enter:(XSession *)arg1;
- (void)storeFlag:(XSession *)arg1;
- (void)getSessionInfoByType:(int)arg1 withCallback:(void (^)(PSessionInfoQueryRes *, _Bool, XSession *))arg2;
- (void)getSessionInfo:(long long)arg1 withCallback:(void (^)(PGetSessionInfoRes *, _Bool, XSession *))arg2;
- (void)validSessionOf:(long long)arg1 on:(void (^)(PGetSessionInfoRes *, _Bool, XSession *))arg2;
- (XSession *)sessionForTargetId:(long long)arg1;
- (XSession *)sessionOf:(long long)arg1;
- (void)createSessionImBySystem:(long long)arg1 withCallback:(void (^)(PCreateSessionRes *, _Bool, XSession *))arg2;
- (void)createSessionImByUserId:(long long)arg1 fromPoolId:(NSString *)arg2 sessionType:(int)arg3 withCallback:(void (^)(PCreateSessionRes *, _Bool, XSession *))arg4;
- (void)createSessionImByUserId:(long long)arg1 sessionType:(int)arg2 withCallback:(void (^)(PCreateSessionRes *, _Bool, XSession *))arg3;
- (void)createSessionImByPond:(long long)arg1 andUid:(long long)arg2 withCallback:(void (^)(PCreateSessionRes *, _Bool, XSession *))arg3;
- (void)createSessionImByItem:(long long)arg1 andUid:(long long)arg2 sessionType:(int)arg3 withCallback:(void (^)(PCreateSessionRes *, _Bool, XSession *))arg4;
@end

