//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface UpdateProfileReqItem : NSObject
{
    UIImage *_avatar;
    NSString *_nickName;
    long long _gender;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
- (void)dealloc;

@end

