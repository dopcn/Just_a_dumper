//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NVWhiteBoard, PFBHomeDisplayModel;

@interface PFBHomeInstoreViewModel : NSObject
{
    PFBHomeDisplayModel *_displayModel;
    NVWhiteBoard *_whiteBoard;
}

@property(retain, nonatomic) NVWhiteBoard *whiteBoard; // @synthesize whiteBoard=_whiteBoard;
@property(retain, nonatomic) PFBHomeDisplayModel *displayModel; // @synthesize displayModel=_displayModel;
- (void).cxx_destruct;
- (void)fetchDataWithUpdateCards:(id)arg1;
- (id)initWithWhiteBoard:(id)arg1;

@end

