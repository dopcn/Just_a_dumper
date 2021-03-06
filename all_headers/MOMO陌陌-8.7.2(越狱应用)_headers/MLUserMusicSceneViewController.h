//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString;

@interface MLUserMusicSceneViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_sceneArr;
    NSString *_sceneName;
    CDUnknownBlockType _didSelecte;
    CDUnknownBlockType _logCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType logCallBack; // @synthesize logCallBack=_logCallBack;
@property(copy, nonatomic) CDUnknownBlockType didSelecte; // @synthesize didSelecte=_didSelecte;
@property(retain, nonatomic) NSString *sceneName; // @synthesize sceneName=_sceneName;
@property(retain, nonatomic) NSArray *sceneArr; // @synthesize sceneArr=_sceneArr;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

