//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BeautyBaseViewController.h"

#import "MTBBrushCanvasViewDelegate-Protocol.h"
#import "MTCommonColorPickerDelegate-Protocol.h"
#import "MTPageProtocol-Protocol.h"
#import "MTSideCollectionViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class CircleBrushView, MTBBrushCanvasView, MTBrushModelManager, MTCommonColorPicker, MTHighlightedButton, MTMaterialManagedObject, MTModularManagedObject, MTNavigationController, MTSideCollectionView, NSArray, NSMutableDictionary, NSString, UIButton, UIImage, UILabel, UISlider, UIView;

@interface MTBrushViewController : BeautyBaseViewController <MTSideCollectionViewDelegate, MTCommonColorPickerDelegate, MTBBrushCanvasViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, MTPageProtocol>
{
    _Bool _autoSelectMaterial;
    NSString *_routeCategoryId;
    NSString *_routeMaterialId;
    MTSideCollectionView *_materialCollectionView;
    MTHighlightedButton *_eraserButton;
    MTCommonColorPicker *_colorPicker;
    MTBBrushCanvasView *_canvasView;
    UIView *_brushSliderContainer;
    UISlider *_brushSlider;
    UIButton *_undoButton;
    UIButton *_redoButton;
    UILabel *_sizeLable;
    MTMaterialManagedObject *_currentBrushMaterial;
    MTModularManagedObject *_modularManager;
    MTNavigationController *_moreMaterialsNav;
    MTBrushModelManager *_modelManager;
    UIImage *_resultImage;
    NSArray *_materials;
    MTMaterialManagedObject *_eraserMaterial;
    unsigned long long _shouldSelectIndex;
    CircleBrushView *_circleBrushView;
    NSMutableDictionary *_brushUsedMaterials;
    NSString *_lastTryMaterialID;
}

@property(retain, nonatomic) NSString *lastTryMaterialID; // @synthesize lastTryMaterialID=_lastTryMaterialID;
@property(retain, nonatomic) NSMutableDictionary *brushUsedMaterials; // @synthesize brushUsedMaterials=_brushUsedMaterials;
@property(retain, nonatomic) CircleBrushView *circleBrushView; // @synthesize circleBrushView=_circleBrushView;
@property(nonatomic) _Bool autoSelectMaterial; // @synthesize autoSelectMaterial=_autoSelectMaterial;
@property(nonatomic) unsigned long long shouldSelectIndex; // @synthesize shouldSelectIndex=_shouldSelectIndex;
@property(retain, nonatomic) MTMaterialManagedObject *eraserMaterial; // @synthesize eraserMaterial=_eraserMaterial;
@property(retain, nonatomic) NSArray *materials; // @synthesize materials=_materials;
@property(retain, nonatomic) UIImage *resultImage; // @synthesize resultImage=_resultImage;
@property(retain, nonatomic) MTBrushModelManager *modelManager; // @synthesize modelManager=_modelManager;
@property(retain, nonatomic) MTNavigationController *moreMaterialsNav; // @synthesize moreMaterialsNav=_moreMaterialsNav;
@property(retain, nonatomic) MTModularManagedObject *modularManager; // @synthesize modularManager=_modularManager;
@property(retain, nonatomic) MTMaterialManagedObject *currentBrushMaterial; // @synthesize currentBrushMaterial=_currentBrushMaterial;
@property(nonatomic) __weak UILabel *sizeLable; // @synthesize sizeLable=_sizeLable;
@property(nonatomic) __weak UIButton *redoButton; // @synthesize redoButton=_redoButton;
@property(nonatomic) __weak UIButton *undoButton; // @synthesize undoButton=_undoButton;
@property(nonatomic) __weak UISlider *brushSlider; // @synthesize brushSlider=_brushSlider;
@property(nonatomic) __weak UIView *brushSliderContainer; // @synthesize brushSliderContainer=_brushSliderContainer;
@property(nonatomic) __weak MTBBrushCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) __weak MTCommonColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(nonatomic) __weak MTHighlightedButton *eraserButton; // @synthesize eraserButton=_eraserButton;
@property(nonatomic) __weak MTSideCollectionView *materialCollectionView; // @synthesize materialCollectionView=_materialCollectionView;
@property(copy, nonatomic) NSString *routeMaterialId; // @synthesize routeMaterialId=_routeMaterialId;
@property(copy, nonatomic) NSString *routeCategoryId; // @synthesize routeCategoryId=_routeCategoryId;
- (void).cxx_destruct;
- (void)setUsedColor:(id)arg1 forMaterialID:(id)arg2;
- (id)colorForMaterialID:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)downloadFailedWithNotification:(id)arg1;
- (void)downloadSuccessWithNotification:(id)arg1;
- (void)didSelectCommonColor:(id)arg1;
- (void)setUndoRedoControlHidden:(_Bool)arg1;
- (void)brushSliderEndValueChanged:(id)arg1;
- (void)brushSliderValueChanged:(id)arg1;
- (void)actionEraserButtonClick:(id)arg1;
- (void)actionRedo;
- (void)actionUndo;
- (void)refreshUndoRedoButtonState;
- (void)reloadViewForColseAssetsDetailControllerWithMaterialIDString:(id)arg1;
- (void)showMaterialsManagerController;
- (void)showMoreMaterials;
- (void)updatePenSizeWithValue:(double)arg1;
- (void)applyCurrentPen;
- (void)setEraserSelected:(_Bool)arg1;
- (void)updateCollectionView;
- (double)calculatePenSizeFactorWithSliderValue:(id)arg1;
- (void)changePenColor:(id)arg1;
- (id)mt_pageId;
- (void)canvasTouchCanvasCancel;
- (void)canvasTouchCanvasEnd;
- (void)canvasTouchCanvasBegan;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)footerClicked;
- (void)headerClicked;
- (void)sideBarClicked;
- (id)titleForContainerView:(id)arg1;
- (void)confirmButtonClickedFromContainerView:(id)arg1;
- (void)backButtonClickedFromContainerView:(id)arg1;
- (id)editedImage;
- (void)setupForAnimation;
- (void)setupData;
- (void)setupView;
- (void)dealWithDefaultSelectedMaterial;
- (void)dealRouteMaterial;
- (void)showEnd:(CDUnknownBlockType)arg1;
- (void)prepareForShow;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

