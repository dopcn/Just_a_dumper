//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPCTableViewCell.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LVPictureInfomationCellObject, NSString, UIButton, UITableView, UIView;
@protocol LVPictureInfomationCellDelegate;

@interface LVPictureInfomationCell : IPCTableViewCell <UITableViewDataSource, UITableViewDelegate>
{
    LVPictureInfomationCellObject *_object;
    id <LVPictureInfomationCellDelegate> _cellDelegate;
    UIButton *_spreadButton;
    UITableView *_tableView;
    UIView *_separateView;
}

+ (double)heightForObject:(id)arg1 atIndexPath:(id)arg2 tableView:(id)arg3;
@property(retain, nonatomic) UIView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *spreadButton; // @synthesize spreadButton=_spreadButton;
@property(nonatomic) __weak id <LVPictureInfomationCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) LVPictureInfomationCellObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)spreadButtonClick;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

