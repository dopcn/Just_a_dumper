//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;

@interface WXRecyclerDataController : NSObject
{
    NSArray *_sections;
    NSMapTable *_cellToIndexPathTable;
    NSMapTable *_headerToIndexTable;
}

@property(readonly, nonatomic) NSMapTable *headerToIndexTable; // @synthesize headerToIndexTable=_headerToIndexTable;
@property(readonly, nonatomic) NSMapTable *cellToIndexPathTable; // @synthesize cellToIndexPathTable=_cellToIndexPathTable;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (void)cleanup;
- (id)dataControllerForSection:(long long)arg1;
- (unsigned long long)indexForHeader:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (_Bool)isStickyForHeaderAtIndexPath:(id)arg1;
- (_Bool)hasHeaderInSection:(long long)arg1;
- (struct CGSize)sizeForHeaderAtIndexPath:(id)arg1;
- (id)viewForHeaderAtIndexPath:(id)arg1;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (id)cellForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)updateData:(id)arg1;
- (id)init;

@end

