//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NMMenuDownSideProtocol-Protocol.h"

@class NMMV, NMMenuDownSide, NSString, UIView;
@protocol NMVideoDownloadMenuDelegate;

@interface NMVideoDownloadMenu : NSObject <NMMenuDownSideProtocol>
{
    NMMenuDownSide *_menu;
    UIView *_menuSuperView;
    id <NMVideoDownloadMenuDelegate> _delegate;
    NMMV *_mv;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NMMV *mv; // @synthesize mv=_mv;
@property(nonatomic) id <NMVideoDownloadMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloadMV:(id)arg1 index:(unsigned long long)arg2;
- (void)menuDownSideDidDismiss:(id)arg1;
- (void)_showMenu;
- (void)dismiss:(_Bool)arg1;
- (void)dismiss;
- (void)showMenuWithMV:(id)arg1 superView:(id)arg2;
- (void)showMenuWithMV:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

