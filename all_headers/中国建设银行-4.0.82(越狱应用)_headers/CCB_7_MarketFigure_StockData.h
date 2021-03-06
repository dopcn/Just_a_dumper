//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CCB_7_MarketFigure_StockData : NSObject
{
    _Bool _dataValid;
    NSString *_timeString;
    double _preCloseDouble;
    double _openDouble;
    double _closeDouble;
    double _highDouble;
    double _lowDouble;
    long long _volumeLong;
    double _amountDouble;
    double _zhangdiefu;
    double _MA5;
    double _MA10;
    double _MA20;
}

+ (id)maDataWithArray:(id)arg1;
@property(nonatomic) double MA20; // @synthesize MA20=_MA20;
@property(nonatomic) double MA10; // @synthesize MA10=_MA10;
@property(nonatomic) double MA5; // @synthesize MA5=_MA5;
@property(nonatomic) double zhangdiefu; // @synthesize zhangdiefu=_zhangdiefu;
@property(nonatomic) double amountDouble; // @synthesize amountDouble=_amountDouble;
@property(nonatomic) long long volumeLong; // @synthesize volumeLong=_volumeLong;
@property(nonatomic) double lowDouble; // @synthesize lowDouble=_lowDouble;
@property(nonatomic) double highDouble; // @synthesize highDouble=_highDouble;
@property(nonatomic) double closeDouble; // @synthesize closeDouble=_closeDouble;
@property(nonatomic) double openDouble; // @synthesize openDouble=_openDouble;
@property(nonatomic) double preCloseDouble; // @synthesize preCloseDouble=_preCloseDouble;
@property(retain, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(nonatomic) _Bool dataValid; // @synthesize dataValid=_dataValid;
- (void).cxx_destruct;
- (id)description;
- (id)valueFormKeyValueString:(id)arg1;
- (id)initWithArray:(id)arg1;

@end

