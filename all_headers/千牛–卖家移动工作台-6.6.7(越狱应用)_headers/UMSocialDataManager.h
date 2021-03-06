//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface UMSocialDataManager : NSObject
{
    NSMutableDictionary *_allAuthorUserInfo;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)deleteAuthorUserInfoFilePath;
- (void)clearAllAuthorUserInfo;
- (_Bool)isExpireDateWithDate:(id)arg1;
- (_Bool)isAuth:(long long)arg1;
- (void)deleteAuthorUserInfoWithPlatform:(long long)arg1;
- (void)saveAuthorUserInfo;
- (id)getAuthorUserInfoWithPlatform:(long long)arg1;
- (void)setAuthorUserInfo:(id)arg1 platform:(long long)arg2;
- (long long)platformTypeWithPlatformKey:(id)arg1;
- (id)platformKeyWithPlatformType:(long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *allAuthorUserInfo; // @synthesize allAuthorUserInfo=_allAuthorUserInfo;

@end

