//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APSChatToolBarSubView.h"

@class NSArray, UIButton;

@interface APSChatToolBarMenusView : APSChatToolBarSubView
{
    NSArray *_menuList;
    UIButton *_btnLeftKeybord;
    CDUnknownBlockType _menuClicked;
}

@property(copy, nonatomic) CDUnknownBlockType menuClicked; // @synthesize menuClicked=_menuClicked;
- (void).cxx_destruct;
- (void)btnMenuClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withMenuList:(id)arg2;

@end

