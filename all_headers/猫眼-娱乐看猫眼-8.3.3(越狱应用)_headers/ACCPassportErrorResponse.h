//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class ACCPassportErrorData, NSString;

@interface ACCPassportErrorResponse : SAKDomainObject
{
    long long _errorCode;
    NSString *_errorMessage;
    NSString *_errorType;
    ACCPassportErrorData *_data;
}

+ (id)dataJSONTransformer;
+ (id)predicateDictionary;
@property(retain, nonatomic) ACCPassportErrorData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *errorType; // @synthesize errorType=_errorType;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (id)commonErrorModel;

@end

