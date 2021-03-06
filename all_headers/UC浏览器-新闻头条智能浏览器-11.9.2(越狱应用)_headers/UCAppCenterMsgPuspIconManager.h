//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UCAppCenterMsgPuspIconManager : NSObject
{
    int m_iconUpdateTime;
}

@property(readonly, nonatomic) int iconUpdateTime; // @synthesize iconUpdateTime=m_iconUpdateTime;
- (id)getIconByID:(id)arg1;
- (id)appCenterFolderFullPath:(_Bool)arg1;
- (void)saveIconToFileFromUIImage:(id)arg1 imageData:(id)arg2 path:(id)arg3;
- (void)parseMsgPushIcon:(struct ACMsgPushResponsePbStruct *)arg1;
- (void)synchronize;
- (void)dealloc;
- (id)init;

@end

