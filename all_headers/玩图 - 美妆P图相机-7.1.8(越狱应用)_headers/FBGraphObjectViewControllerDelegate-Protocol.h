//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBGraphObjectTableCell, FBGraphObjectTableDataSource, NSString;
@protocol FBGraphObject;

@protocol FBGraphObjectViewControllerDelegate <NSObject>
- (NSString *)graphObjectTableDataSource:(FBGraphObjectTableDataSource *)arg1 titleOfItem:(id <FBGraphObject>)arg2;

@optional
- (void)graphObjectTableDataSource:(FBGraphObjectTableDataSource *)arg1 customizeTableCell:(FBGraphObjectTableCell *)arg2;
- (_Bool)graphObjectTableDataSource:(FBGraphObjectTableDataSource *)arg1 filterIncludesItem:(id <FBGraphObject>)arg2;
- (NSString *)graphObjectTableDataSource:(FBGraphObjectTableDataSource *)arg1 pictureUrlOfItem:(id <FBGraphObject>)arg2;
- (NSString *)graphObjectTableDataSource:(FBGraphObjectTableDataSource *)arg1 subtitleOfItem:(id <FBGraphObject>)arg2;
- (NSString *)graphObjectTableDataSource:(FBGraphObjectTableDataSource *)arg1 titleSuffixOfItem:(id <FBGraphObject>)arg2;
@end

