//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDSOrgBaseModel.h"

@class NSString;

@interface WDSOrgUserInfoModel : WDSOrgBaseModel
{
    NSString *_userId;
    NSString *_sellerId;
    NSString *_nickName;
    NSString *_headUrl;
    long long _staff;
    long long _role;
}

+ (id)deserializeFromDictionary:(id)arg1;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) long long staff; // @synthesize staff=_staff;
@property(copy, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

