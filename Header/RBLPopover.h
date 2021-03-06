//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

@class NSSet, NSViewController, RBLPopoverBackgroundView, RBLPopoverWindow;

__attribute__((visibility("hidden")))
@interface RBLPopover : NSResponder
{
    BOOL _animates;
    BOOL _canBecomeKey;
    NSViewController *_contentViewController;
    RBLPopoverBackgroundView *_backgroundView;
    unsigned long long _behavior;
    CDUnknownBlockType _willCloseBlock;
    CDUnknownBlockType _didCloseBlock;
    CDUnknownBlockType _willShowBlock;
    CDUnknownBlockType _didShowBlock;
    double _fadeDuration;
    RBLPopoverWindow *_popoverWindow;
    NSSet *_transientEventMonitors;
    struct CGSize _contentSize;
    struct CGPoint _anchorPoint;
    struct CGSize _originalViewSize;
}

@property(nonatomic) struct CGSize originalViewSize; // @synthesize originalViewSize=_originalViewSize;
@property(copy, nonatomic) NSSet *transientEventMonitors; // @synthesize transientEventMonitors=_transientEventMonitors;
@property(retain, nonatomic) RBLPopoverWindow *popoverWindow; // @synthesize popoverWindow=_popoverWindow;
@property(nonatomic) BOOL canBecomeKey; // @synthesize canBecomeKey=_canBecomeKey;
@property(nonatomic) double fadeDuration; // @synthesize fadeDuration=_fadeDuration;
@property(copy, nonatomic) CDUnknownBlockType didShowBlock; // @synthesize didShowBlock=_didShowBlock;
@property(copy, nonatomic) CDUnknownBlockType willShowBlock; // @synthesize willShowBlock=_willShowBlock;
@property(copy, nonatomic) CDUnknownBlockType didCloseBlock; // @synthesize didCloseBlock=_didCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType willCloseBlock; // @synthesize willCloseBlock=_willCloseBlock;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) BOOL animates; // @synthesize animates=_animates;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) RBLPopoverBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)appResignedActive:(id)arg1;
- (void)removeEventMonitors;
- (void)performClose:(id)arg1;
- (void)close;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned int)arg3;
@property(readonly, nonatomic, getter=isShown) BOOL shown;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1 backgroundView:(id)arg2;
- (id)initWithContentViewController:(id)arg1;

@end

