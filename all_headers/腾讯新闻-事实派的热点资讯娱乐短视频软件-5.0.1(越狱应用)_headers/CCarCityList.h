//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray;

@interface CCarCityList : NSObject <NSCoding>
{
    NSMutableArray *_cityCapitalArray;
    NSMutableArray *_cityCapitalValueArray;
    NSMutableArray *_hotCityArray;
    NSMutableArray *_discntCapitalCityArray;
    NSMutableArray *_discntCityArray;
}

@property(retain, nonatomic) NSMutableArray *discntCityArray; // @synthesize discntCityArray=_discntCityArray;
@property(retain, nonatomic) NSMutableArray *discntCapitalCityArray; // @synthesize discntCapitalCityArray=_discntCapitalCityArray;
@property(retain, nonatomic) NSMutableArray *hotCityArray; // @synthesize hotCityArray=_hotCityArray;
@property(retain, nonatomic) NSMutableArray *cityCapitalValueArray; // @synthesize cityCapitalValueArray=_cityCapitalValueArray;
@property(retain, nonatomic) NSMutableArray *cityCapitalArray; // @synthesize cityCapitalArray=_cityCapitalArray;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

