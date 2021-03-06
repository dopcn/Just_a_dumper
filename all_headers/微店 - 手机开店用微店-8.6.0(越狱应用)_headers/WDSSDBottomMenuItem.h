//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDSSDBottomMenuSubItem.h"

@class NSArray, UIView, WDSSDMenuItemData;
@protocol WDSSDBottomMenuItemDelegate;

@interface WDSSDBottomMenuItem : WDSSDBottomMenuSubItem
{
    WDSSDMenuItemData *_menuItemData;
    id <WDSSDBottomMenuItemDelegate> _delegate;
    UIView *_subItemsView;
    NSArray *_itemSubViews;
}

@property(retain, nonatomic) NSArray *itemSubViews; // @synthesize itemSubViews=_itemSubViews;
@property(retain, nonatomic) UIView *subItemsView; // @synthesize subItemsView=_subItemsView;
@property(nonatomic) __weak id <WDSSDBottomMenuItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WDSSDMenuItemData *menuItemData; // @synthesize menuItemData=_menuItemData;
- (void).cxx_destruct;
- (void)didTapSubItem:(id)arg1;
- (void)hideSubItems;
- (id)showSubItemsWithFrame:(struct CGRect)arg1;

@end

