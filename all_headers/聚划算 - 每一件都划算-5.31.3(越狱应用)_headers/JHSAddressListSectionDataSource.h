//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UITableViewCell;

@interface JHSAddressListSectionDataSource : NSObject
{
    _Bool _canEdit;
    long long _rowsCount;
    long long _rowsHeight;
    UITableViewCell *_cell;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _cellForRowBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cellForRowBlock; // @synthesize cellForRowBlock=_cellForRowBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(nonatomic) long long rowsHeight; // @synthesize rowsHeight=_rowsHeight;
@property(nonatomic) long long rowsCount; // @synthesize rowsCount=_rowsCount;
- (void).cxx_destruct;

@end

