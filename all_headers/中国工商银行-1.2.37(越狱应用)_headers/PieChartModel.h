//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PieChartModel : NSObject
{
    NSString *_label;
    double _number;
    double _percent;
}

@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) double number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

