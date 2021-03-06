//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CTCustomColor, NSArray, NSMutableArray, NSString, UITableView;

@interface CTAppWallContentView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSArray *_dataSourceArr;
    NSString *_titleStr;
    NSMutableArray *_cellArr;
    id _ctDelegate;
    CTCustomColor *_customC;
}

@property(retain, nonatomic) CTCustomColor *customC; // @synthesize customC=_customC;
@property(nonatomic) __weak id ctDelegate; // @synthesize ctDelegate=_ctDelegate;
@property(retain, nonatomic) NSMutableArray *cellArr; // @synthesize cellArr=_cellArr;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) NSArray *dataSourceArr; // @synthesize dataSourceArr=_dataSourceArr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)getImageFromURL:(id)arg1 img:(CDUnknownBlockType)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

