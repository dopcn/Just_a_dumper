//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GJGCUserModel, NSString;

@interface GJGCFriendUser : NSObject
{
    long long _friendVersion;
    long long _groupVersion;
    long long _noticeVersion;
    long long _localFriendVersion;
    long long _localGroupVersion;
    long long _localNoticeVersion;
    GJGCUserModel *myUserModel;
    NSString *_imId;
    NSString *_iphone;
}

+ (id)share;
@property(retain, nonatomic) NSString *iphone; // @synthesize iphone=_iphone;
@property(copy, nonatomic) NSString *imId; // @synthesize imId=_imId;
@property(retain, nonatomic) GJGCUserModel *myUserModel; // @synthesize myUserModel;
@property(nonatomic) long long localNoticeVersion; // @synthesize localNoticeVersion=_localNoticeVersion;
@property(nonatomic) long long localGroupVersion; // @synthesize localGroupVersion=_localGroupVersion;
@property(nonatomic) long long localFriendVersion; // @synthesize localFriendVersion=_localFriendVersion;
@property(nonatomic) long long noticeVersion; // @synthesize noticeVersion=_noticeVersion;
@property(nonatomic) long long groupVersion; // @synthesize groupVersion=_groupVersion;
@property(nonatomic) long long friendVersion; // @synthesize friendVersion=_friendVersion;
- (void).cxx_destruct;
- (_Bool)isPullPGGroup;
- (void)loadUserModel;
- (void)receiveLastVersion:(id)arg1;
- (void)changeUserModel;
- (void)dealloc;
- (void)reload;
- (id)init;

@end

