//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ALAssetsGroup, NSMutableArray, UILabel;

@interface SIKImagePickerPreView : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    UILabel *_footerView;
    NSMutableArray *_assets;
    id _target;
    SEL _action;
    ALAssetsGroup *_group;
    int _column;
}

@property(nonatomic) int column; // @synthesize column=_column;
@property(retain, nonatomic) ALAssetsGroup *group; // @synthesize group=_group;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)actionButton:(id)arg1;
- (void)callbackWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (void)dealloc;

@end

