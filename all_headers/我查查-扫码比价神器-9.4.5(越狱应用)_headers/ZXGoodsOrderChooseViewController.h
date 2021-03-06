//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TrackedUIViewController.h"

@class NSArray, NSIndexPath, NSObject, UITableView;
@protocol ZXGoodsOrderChooseViewControllerDelegate;

@interface ZXGoodsOrderChooseViewController : TrackedUIViewController
{
    int _intType;
    NSArray *_arrChoices;
    NSObject<ZXGoodsOrderChooseViewControllerDelegate> *_delegate;
    NSIndexPath *_indexPath;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak NSObject<ZXGoodsOrderChooseViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *arrChoices; // @synthesize arrChoices=_arrChoices;
@property(nonatomic) int intType; // @synthesize intType=_intType;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

