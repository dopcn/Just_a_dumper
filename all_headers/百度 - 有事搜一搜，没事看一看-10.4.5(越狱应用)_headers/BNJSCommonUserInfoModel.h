//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BNJSBaseJSONModel.h"

@class NSString;
@protocol Optional;

@interface BNJSCommonUserInfoModel : BNJSBaseJSONModel
{
    NSString<Optional> *_userData;
    NSString<Optional> *_aesKey;
}

@property(copy, nonatomic) NSString<Optional> *aesKey; // @synthesize aesKey=_aesKey;
@property(copy, nonatomic) NSString<Optional> *userData; // @synthesize userData=_userData;
- (void).cxx_destruct;

@end

