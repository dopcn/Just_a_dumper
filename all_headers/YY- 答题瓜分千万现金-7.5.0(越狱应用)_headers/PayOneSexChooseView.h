//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UILabel, UITableView;
@protocol PayOneSexChooseViewDelegate;

@interface PayOneSexChooseView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSArray *_sexTypes;
    UILabel *_titleLabel;
    UIView *_lineView;
    CDUnknownBlockType _delaySelectRowAtIndexPath;
    id <PayOneSexChooseViewDelegate> _delegate;
    long long _currentSexType;
}

@property(nonatomic) long long currentSexType; // @synthesize currentSexType=_currentSexType;
@property(nonatomic) __weak id <PayOneSexChooseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)sexTypeAtIndexPath:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

