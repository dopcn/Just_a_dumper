//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, TBCIMForumUserChatViewController;

@interface TBCForumSubMenuView : UIView
{
    NSArray *_subMenuItemsArray;
    TBCIMForumUserChatViewController *_parentViewController;
}

@property(nonatomic) TBCIMForumUserChatViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) NSArray *subMenuItemsArray; // @synthesize subMenuItemsArray=_subMenuItemsArray;
- (id)createSeparatorLineWithY:(double)arg1;
- (void)bindData:(id)arg1 withMenuItemIndex:(int)arg2 andMenuItemWidth:(int)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

