//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UCBookmarkNavigationBarExProperty, iUIFavManagerView;

@interface BookmarkViewController : UIViewController
{
    iUIFavManagerView *_favView;
    UCBookmarkNavigationBarExProperty *_naviBarProperty;
}

@property(retain, nonatomic) UCBookmarkNavigationBarExProperty *naviBarProperty; // @synthesize naviBarProperty=_naviBarProperty;
@property(retain, nonatomic) iUIFavManagerView *favView; // @synthesize favView=_favView;
- (id)navBarExProperty;
- (id)view;
- (id)title;
- (void)dealloc;

@end

