//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMARBaseModel.h"

@interface QMARJumpModel : QMARBaseModel
{
    unsigned long long _jumpMode;
    double _autoJumpTimeInterval;
}

+ (id)testModelPepsiGirl;
+ (id)testModelPepsiBoy;
+ (id)jsonParsePrefix;
@property(nonatomic) double autoJumpTimeInterval; // @synthesize autoJumpTimeInterval=_autoJumpTimeInterval;
@property(nonatomic) unsigned long long jumpMode; // @synthesize jumpMode=_jumpMode;
- (id)initWithServerResponseDictionary:(id)arg1;

@end

