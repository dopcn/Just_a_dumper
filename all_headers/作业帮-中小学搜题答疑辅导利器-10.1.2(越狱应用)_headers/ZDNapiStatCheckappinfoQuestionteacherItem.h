//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSString;
@protocol Optional;

@interface ZDNapiStatCheckappinfoQuestionteacherItem : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    long long _primarySchool;
    long long _highSchool;
    long long _isDiscount;
    long long _middleSchool;
}

@property(nonatomic) long long middleSchool; // @synthesize middleSchool=_middleSchool;
@property(nonatomic) long long isDiscount; // @synthesize isDiscount=_isDiscount;
@property(nonatomic) long long highSchool; // @synthesize highSchool=_highSchool;
@property(nonatomic) long long primarySchool; // @synthesize primarySchool=_primarySchool;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;

@end

