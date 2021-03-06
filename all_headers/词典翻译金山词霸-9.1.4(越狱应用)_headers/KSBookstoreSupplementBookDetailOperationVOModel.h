//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface KSBookstoreSupplementBookDetailOperationVOModel : JSONModel
{
    NSString<Optional> *_position;
    NSString<Optional> *_cardType;
    NSString<Optional> *_cardTitle;
    NSString<Optional> *_cardContent;
    NSString<Optional> *_cardImg;
    NSString<Optional> *_jumpType;
    NSString<Optional> *_jumpUrl;
    NSString<Optional> *_client;
    NSString<Optional> *_startTime;
    NSString<Optional> *_endTime;
    NSNumber<Optional> *_isSpread;
    NSNumber<Optional> *_constant;
    NSString<Optional> *_isSubtractStr;
}

@property(retain, nonatomic) NSString<Optional> *isSubtractStr; // @synthesize isSubtractStr=_isSubtractStr;
@property(retain, nonatomic) NSNumber<Optional> *constant; // @synthesize constant=_constant;
@property(retain, nonatomic) NSNumber<Optional> *isSpread; // @synthesize isSpread=_isSpread;
@property(retain, nonatomic) NSString<Optional> *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString<Optional> *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString<Optional> *client; // @synthesize client=_client;
@property(retain, nonatomic) NSString<Optional> *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString<Optional> *jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString<Optional> *cardImg; // @synthesize cardImg=_cardImg;
@property(retain, nonatomic) NSString<Optional> *cardContent; // @synthesize cardContent=_cardContent;
@property(retain, nonatomic) NSString<Optional> *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(retain, nonatomic) NSString<Optional> *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString<Optional> *position; // @synthesize position=_position;
- (void).cxx_destruct;

@end

