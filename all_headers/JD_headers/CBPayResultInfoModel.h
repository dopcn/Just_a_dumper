//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBModel.h"

@class NSString;

@interface CBPayResultInfoModel : CBModel
{
    NSString *_extraMsg;
    NSString *_payStatus;
    NSString *_authResult;
    NSString *_authName;
}

@property(copy, nonatomic) NSString *authName; // @synthesize authName=_authName;
@property(copy, nonatomic) NSString *authResult; // @synthesize authResult=_authResult;
@property(copy, nonatomic) NSString *payStatus; // @synthesize payStatus=_payStatus;
@property(copy, nonatomic) NSString *extraMsg; // @synthesize extraMsg=_extraMsg;
- (void).cxx_destruct;

@end

