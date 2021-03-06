//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "HTKPersonalInfoListCellProtocol-Protocol.h"

@class NSString, UIButton, UIViewController;
@protocol HTKPersonalInfoListItemProtocol;

@interface TTKTrainAddPassengerCell : UITableViewCell <HTKPersonalInfoListCellProtocol>
{
    _Bool _isGrabTicket;
    _Bool _needDirect12306;
    id <HTKPersonalInfoListItemProtocol> _item;
    UIViewController *_sourceViewController;
    UIButton *_createPersonButton;
    UIButton *_extraFunctionButton;
}

@property(nonatomic) _Bool needDirect12306; // @synthesize needDirect12306=_needDirect12306;
@property(nonatomic) _Bool isGrabTicket; // @synthesize isGrabTicket=_isGrabTicket;
@property(retain, nonatomic) UIButton *extraFunctionButton; // @synthesize extraFunctionButton=_extraFunctionButton;
@property(retain, nonatomic) UIButton *createPersonButton; // @synthesize createPersonButton=_createPersonButton;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) id <HTKPersonalInfoListItemProtocol> item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)showPersonalInfoPageWithModel:(id)arg1;
- (void)showLoginViewWithSuccessAction:(CDUnknownBlockType)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

