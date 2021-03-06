//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARSCNView.h>

#import "ARSessionDelegate-Protocol.h"
#import "MttARMainViewExport-Protocol.h"
#import "MttARWebNetViewNodeDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class MttARWebHomePageNode, MttARWebNetViewNode, NSMutableArray, NSString, NSTimer, SCNNode;

@interface MttARMainView : ARSCNView <MttARMainViewExport, UIWebViewDelegate, MttARWebNetViewNodeDelegate, ARSessionDelegate>
{
    MttARWebNetViewNode *_currentWebNode;
    NSTimer *_timer;
    SCNNode *_sphereWallRootNode;
    MttARWebHomePageNode *_homePageNode;
    NSMutableArray *_webPageNodesArray;
}

@property(retain, nonatomic) NSMutableArray *webPageNodesArray; // @synthesize webPageNodesArray=_webPageNodesArray;
@property(retain, nonatomic) MttARWebHomePageNode *homePageNode; // @synthesize homePageNode=_homePageNode;
@property(retain, nonatomic) SCNNode *sphereWallRootNode; // @synthesize sphereWallRootNode=_sphereWallRootNode;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)MttARWebNetViewNode:(id)arg1 exeuteCMD:(int)arg2;
- (void)onTimer:(id)arg1;
- (void)webNodeExit:(id)arg1;
- (void)addWebNodeByURL:(id)arg1 title:(id)arg2 color:(id)arg3;
- (void)addUniverseNode;
- (int)nextAviablePosition;
- (void)willExit;
- (void)addHomePageNode;
- (void)createSphereWallRootNode;
- (void)addTextNode;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

