//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSEasyAPIRequestParameter.h"

@class NSString;

@interface VSResetPswBySecurityQuestionRequest : VSEasyAPIRequestParameter
{
    NSString *_token;
    NSString *_username;
    NSString *_password;
}

@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)toDictionary;

@end

