//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KWPublicViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, WPSTableView;
@protocol KWHelpDocumentViewControllerDelegate;

@interface KWHelpDocumentViewController : KWPublicViewController <UITableViewDelegate, UITableViewDataSource>
{
    WPSTableView *_helpDocumentTableView;
    id <KWHelpDocumentViewControllerDelegate> _delegate;
    NSArray *_helpDocuments;
}

@property(retain, nonatomic) NSArray *helpDocuments; // @synthesize helpDocuments=_helpDocuments;
@property(nonatomic) __weak id <KWHelpDocumentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backAction:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)popThemePreviewViewControllerToNewDocumentViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

