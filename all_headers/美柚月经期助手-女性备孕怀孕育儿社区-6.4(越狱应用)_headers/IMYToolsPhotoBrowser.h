//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MWPhotoBrowser.h"

@protocol IMYToolsPhotoBrowserProtocol;

@interface IMYToolsPhotoBrowser : MWPhotoBrowser
{
    id <IMYToolsPhotoBrowserProtocol> toolsDelegate;
}

@property(nonatomic) __weak id <IMYToolsPhotoBrowserProtocol> toolsDelegate; // @synthesize toolsDelegate;
- (void).cxx_destruct;
- (void)setNavBarAppearance:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithPhotos:(id)arg1;
- (id)init;

@end

