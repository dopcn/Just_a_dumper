//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPDataController.h"

@class NSString;

@interface PPRegisterValidatePhoneDataController : PPDataController
{
    NSString *_errorMessage;
    long long _errorCode;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void).cxx_destruct;
- (id)requestPath;
- (_Bool)parseContent:(id)arg1;
- (void)validatePhoneNumber:(id)arg1;

@end

