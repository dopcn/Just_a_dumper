//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCModel.h"

@class NSString;

@interface SCWeiboTokenModel : SCModel
{
    NSString *_accessToken;
    NSString *_sinaId;
    NSString *_refreshToken;
    NSString *_remindIn;
    NSString *_expiresIn;
}

+ (id)initializationModel;
@property(copy, nonatomic) NSString *expiresIn; // @synthesize expiresIn=_expiresIn;
@property(copy, nonatomic) NSString *remindIn; // @synthesize remindIn=_remindIn;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *sinaId; // @synthesize sinaId=_sinaId;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;

@end

