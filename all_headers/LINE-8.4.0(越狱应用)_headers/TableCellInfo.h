//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TableCellInfo : NSObject
{
    long long _cellType;
    id _info;
}

+ (id)tableCellInfoWithType:(long long)arg1 info:(id)arg2;
@property(retain, nonatomic) id info; // @synthesize info=_info;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;

@end

