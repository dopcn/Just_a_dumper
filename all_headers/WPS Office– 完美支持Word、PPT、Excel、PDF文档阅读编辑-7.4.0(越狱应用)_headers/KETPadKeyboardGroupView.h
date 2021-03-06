//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KETToolbarItem;

@interface KETPadKeyboardGroupView : UIView
{
    _Bool _enabled;
    _Bool _expandind;
    KETToolbarItem *_formularBtn;
    KETToolbarItem *_numberBtn;
    KETToolbarItem *_systemBtn;
    KETToolbarItem *_dockBtn;
    long long _groupType;
    long long _selectedTag;
}

@property(nonatomic) _Bool expandind; // @synthesize expandind=_expandind;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long selectedTag; // @synthesize selectedTag=_selectedTag;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) KETToolbarItem *dockBtn; // @synthesize dockBtn=_dockBtn;
@property(retain, nonatomic) KETToolbarItem *systemBtn; // @synthesize systemBtn=_systemBtn;
@property(retain, nonatomic) KETToolbarItem *numberBtn; // @synthesize numberBtn=_numberBtn;
@property(retain, nonatomic) KETToolbarItem *formularBtn; // @synthesize formularBtn=_formularBtn;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)dealloc;

@end

