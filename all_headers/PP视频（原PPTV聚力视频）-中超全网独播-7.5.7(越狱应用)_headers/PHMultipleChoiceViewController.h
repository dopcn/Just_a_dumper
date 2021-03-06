//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PHNormalViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString, UINib, UITableView, UIView;

@interface PHMultipleChoiceViewController : PHNormalViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UIView *_footerView;
    UINib *_nib;
    NSArray *_arr;
    NSIndexPath *_currentIndexPath;
    NSString *_currentDefinition;
}

@property(retain, nonatomic) NSString *currentDefinition; // @synthesize currentDefinition=_currentDefinition;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) NSArray *arr; // @synthesize arr=_arr;
@property(retain, nonatomic) UINib *nib; // @synthesize nib=_nib;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

