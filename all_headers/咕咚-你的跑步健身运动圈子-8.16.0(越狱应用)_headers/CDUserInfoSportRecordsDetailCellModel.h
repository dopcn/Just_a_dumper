//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CDPersonalBestRecord, NSString;

@interface CDUserInfoSportRecordsDetailCellModel : NSObject
{
    unsigned long long _cellType;
    NSString *_titleName;
    NSString *_valueString;
    CDPersonalBestRecord *_pbRecord;
}

+ (id)modelWithCellType:(unsigned long long)arg1 titleName:(id)arg2 valueString:(id)arg3;
@property(retain, nonatomic) CDPersonalBestRecord *pbRecord; // @synthesize pbRecord=_pbRecord;
@property(copy, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(copy, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;

@end

