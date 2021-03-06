//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage, UIImageView, UITableView, UIView;

@interface SAutoScrollToNavAction : NSObject
{
    _Bool _enabled;
    _Bool _moveable;
    UIView *_autoView;
    UIImage *_aimImage;
    UITableView *_tableView;
    UIImageView *_imageView;
    double _toTop;
    double _fromTop;
    UIView *_bgView;
    struct CGRect _selectRect;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool moveable; // @synthesize moveable=_moveable;
@property(nonatomic) double fromTop; // @synthesize fromTop=_fromTop;
@property(nonatomic) double toTop; // @synthesize toTop=_toTop;
@property(nonatomic) struct CGRect selectRect; // @synthesize selectRect=_selectRect;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIImage *aimImage; // @synthesize aimImage=_aimImage;
@property(nonatomic) __weak UIView *autoView; // @synthesize autoView=_autoView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)needDealloc:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setSelectRect:(struct CGRect)arg1 fromTop:(double)arg2 toTop:(double)arg3 moveable:(_Bool)arg4;
- (void)setSelectRect:(struct CGRect)arg1 fromTop:(double)arg2 toTop:(double)arg3;
- (id)init;

@end

